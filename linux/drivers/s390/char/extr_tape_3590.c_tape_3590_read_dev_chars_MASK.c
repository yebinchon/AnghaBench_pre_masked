
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int cpdata; int cpaddr; int op; } ;
struct tape_device {int dummy; } ;
struct tape_3590_rdc_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tape_request*) ;
 int FUNC_1 (struct tape_request*) ;
 int VAR_1 ;
 int FUNC_2 (struct tape_3590_rdc_data*,int ,int) ;
 struct tape_request* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (struct tape_device*,struct tape_request*) ;
 int FUNC_6 (struct tape_request*) ;

__attribute__((used)) static int FUNC_7(struct tape_device *VAR_2,
        struct tape_3590_rdc_data *VAR_3)
{
 int VAR_4;
 struct tape_request *VAR_5;

 VAR_5 = FUNC_3(1, sizeof(*VAR_3));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_5->op = VAR_1;
 FUNC_4(VAR_5->cpaddr, VAR_0, sizeof(*VAR_3),
       VAR_5->cpdata);
 VAR_4 = FUNC_5(VAR_2, VAR_5);
 if (VAR_4 == 0)
  FUNC_2(VAR_3, VAR_5->cpdata, sizeof(*VAR_3));
 FUNC_6(VAR_5);
 return VAR_4;
}
