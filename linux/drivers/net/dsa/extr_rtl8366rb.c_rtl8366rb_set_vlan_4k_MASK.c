
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_vlan_4k {int vid; int member; int untag; int fid; } ;
struct realtek_smi {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct realtek_smi *VAR_11,
     const struct rtl8366_vlan_4k *VAR_12)
{
 u32 VAR_13[3];
 int VAR_14;
 int VAR_15;

 if (VAR_12->vid >= VAR_2 ||
     VAR_12->member > VAR_6 ||
     VAR_12->untag > VAR_8 ||
     VAR_12->fid > VAR_1)
  return -VAR_0;

 VAR_13[0] = VAR_12->vid & VAR_10;
 VAR_13[1] = (VAR_12->member & VAR_6) |
    ((VAR_12->untag & VAR_8) <<
   VAR_9);
 VAR_13[2] = VAR_12->fid & VAR_5;

 for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
  VAR_14 = FUNC_0(VAR_11->map,
       VAR_7 + VAR_15,
       VAR_13[VAR_15]);
  if (VAR_14)
   return VAR_14;
 }


 VAR_14 = FUNC_0(VAR_11->map, VAR_3,
      VAR_4);

 return VAR_14;
}
