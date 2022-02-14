
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_probe_info {int dummy; } ;
struct niu_parent {int dummy; } ;
struct niu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct niu*,int,int ,int ) ;
 int FUNC_1 (struct phy_probe_info*,int ,int) ;
 int FUNC_2 (struct niu*,int,int ) ;
 int FUNC_3 (struct niu*,unsigned long) ;
 int FUNC_4 (struct niu*,unsigned long) ;
 int FUNC_5 (struct niu_parent*,struct phy_probe_info*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_7, struct niu_parent *VAR_8,
          struct phy_probe_info *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));


 FUNC_3(VAR_7, VAR_10);
 VAR_12 = 0;
 for (VAR_11 = 8; VAR_11 < 32; VAR_11++) {
  int VAR_13, VAR_14;

  VAR_13 = FUNC_0(VAR_7, VAR_11,
         VAR_3, VAR_0);
  VAR_14 = FUNC_0(VAR_7, VAR_11,
         VAR_3, VAR_1);
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_13, VAR_14, VAR_11,
     VAR_6);
  if (VAR_12)
   break;
  VAR_13 = FUNC_0(VAR_7, VAR_11,
         VAR_2, VAR_0);
  VAR_14 = FUNC_0(VAR_7, VAR_11,
         VAR_2, VAR_1);
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_13, VAR_14, VAR_11,
     VAR_5);
  if (VAR_12)
   break;
  VAR_13 = FUNC_2(VAR_7, VAR_11, VAR_0);
  VAR_14 = FUNC_2(VAR_7, VAR_11, VAR_1);
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_13, VAR_14, VAR_11,
     VAR_4);
  if (VAR_12)
   break;
 }
 FUNC_4(VAR_7, VAR_10);

 return VAR_12;
}
