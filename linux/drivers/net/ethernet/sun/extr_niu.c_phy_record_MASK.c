
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct phy_probe_info {size_t* cur; int** phy_id; size_t** phy_port; } ;
struct niu_parent {int index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int,char*,size_t) ;

__attribute__((used)) static int FUNC_2(struct niu_parent *VAR_8, struct phy_probe_info *VAR_9,
        int VAR_10, int VAR_11, u8 VAR_12, int VAR_13)
{
 u32 VAR_14 = (VAR_10 << 16) | VAR_11;
 u8 VAR_15;

 if (VAR_10 < 0 || VAR_11 < 0)
  return 0;
 if (VAR_13 == VAR_7 || VAR_13 == VAR_6) {



  if (((VAR_14 & VAR_4) != VAR_3) &&
      ((VAR_14 & VAR_4) != VAR_5))
   return 0;
 } else {
  if ((VAR_14 & VAR_4) != VAR_2)
   return 0;
 }

 FUNC_1("niu%d: Found PHY %08x type %s at phy_port %u\n",
  VAR_8->index, VAR_14,
  VAR_13 == VAR_7 ? "PMA/PMD" :
  VAR_13 == VAR_6 ? "PCS" : "MII",
  VAR_12);

 if (VAR_9->cur[VAR_13] >= VAR_1) {
  FUNC_0("Too many PHY ports\n");
  return -VAR_0;
 }
 VAR_15 = VAR_9->cur[VAR_13];
 VAR_9->phy_id[VAR_13][VAR_15] = VAR_14;
 VAR_9->phy_port[VAR_13][VAR_15] = VAR_12;
 VAR_9->cur[VAR_13] = VAR_15 + 1;
 return 0;
}
