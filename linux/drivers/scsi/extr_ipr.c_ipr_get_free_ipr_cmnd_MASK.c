
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int * hrrq; } ;
struct ipr_cmnd {int dummy; } ;


 size_t VAR_0 ;
 struct ipr_cmnd* FUNC_0 (int *) ;
 int FUNC_1 (struct ipr_cmnd*,int ) ;
 int VAR_1 ;

__attribute__((used)) static
struct ipr_cmnd *FUNC_2(struct ipr_ioa_cfg *VAR_2)
{
 struct ipr_cmnd *VAR_3 =
  FUNC_0(&VAR_2->hrrq[VAR_0]);
 FUNC_1(VAR_3, VAR_1);
 return VAR_3;
}
