
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pedit_headers_action {int vals; int masks; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(u8 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
    struct pedit_headers_action *VAR_5)
{
 u32 *VAR_6, *VAR_7;

 VAR_6 = (u32 *)(FUNC_0(&VAR_5->masks, VAR_1) + VAR_4);
 VAR_7 = (u32 *)(FUNC_0(&VAR_5->vals, VAR_1) + VAR_4);

 if (*VAR_6 & VAR_2)
  goto out_err;

 *VAR_6 |= VAR_2;
 *VAR_7 |= (VAR_3 & VAR_2);

 return 0;

out_err:
 return -VAR_0;
}
