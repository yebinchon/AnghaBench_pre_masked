
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arena_info {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arena_info*,int,int ,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct arena_info*) ;

__attribute__((used)) static int FUNC_5(struct arena_info *VAR_4, u32 VAR_5, u32 VAR_6,
   u32 VAR_7, u32 VAR_8, unsigned long VAR_9)
{
 u32 VAR_10;
 __le32 VAR_11;





 VAR_6 = FUNC_3(VAR_6);

 VAR_10 = (VAR_7 << 1) + VAR_8;
 switch (VAR_10) {
 case 0:






  VAR_6 |= VAR_1;
  break;
 case 1:
  VAR_6 |= (1 << VAR_2);
  break;
 case 2:
  VAR_6 |= (1 << VAR_3);
  break;
 default:





  FUNC_2(FUNC_4(VAR_4),
   "Invalid use of Z and E flags\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_1(VAR_6);
 return FUNC_0(VAR_4, VAR_5, VAR_11, VAR_9);
}
