
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,int *,int ,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static u64 FUNC_4(struct ctlr_info *VAR_2,
      u8 *VAR_3)
{
 u8 *VAR_4;
 u64 VAR_5 = 0;
 int VAR_6 = 0;

 VAR_4 = FUNC_3(1024, VAR_0);
 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1,
     VAR_4, 1024);

 if (VAR_6)
  goto out;

 VAR_5 = FUNC_0(VAR_4+12);

out:
 FUNC_2(VAR_4);
 return VAR_5;
}
