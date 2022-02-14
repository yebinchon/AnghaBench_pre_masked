
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k5baf {int sd; int supplies; int clock; scalar_t__ apply_crop; scalar_t__ apply_cfg; scalar_t__ streaming; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct s5k5baf*,int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct s5k5baf *VAR_3)
{
 int VAR_4;

 VAR_3->streaming = 0;
 VAR_3->apply_cfg = 0;
 VAR_3->apply_crop = 0;

 FUNC_3(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_2);

 if (!FUNC_0(VAR_3->clock))
  FUNC_1(VAR_3->clock);

 VAR_4 = FUNC_2(VAR_1,
     VAR_3->supplies);
 if (VAR_4 < 0)
  FUNC_4(&VAR_3->sd, "failed to disable regulators\n");

 return 0;
}
