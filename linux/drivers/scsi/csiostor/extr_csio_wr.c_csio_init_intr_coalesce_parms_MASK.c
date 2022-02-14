
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_sge {int dummy; } ;
struct csio_wrm {struct csio_sge sge; } ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct csio_sge*,scalar_t__) ;
 int FUNC_1 (struct csio_sge*,int ) ;
 struct csio_wrm* FUNC_2 (struct csio_hw*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct csio_hw *VAR_5)
{
 struct csio_wrm *VAR_6 = FUNC_2(VAR_5);
 struct csio_sge *VAR_7 = &VAR_6->sge;

 VAR_3 = FUNC_0(VAR_7, VAR_1);
 if (VAR_1) {
  VAR_3 = 0;
  VAR_4 = VAR_0;
  return;
 }

 VAR_4 = FUNC_1(VAR_7, VAR_2);
}
