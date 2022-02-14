
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mcam_camera*) ;
 int FUNC_1 (struct mcam_camera*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mcam_camera *VAR_2)
{
 int VAR_3;

 if (VAR_2->state != VAR_1)
  FUNC_1(VAR_2, "Cam init with device in funky state %d",
    VAR_2->state);
 VAR_3 = FUNC_0(VAR_2);

 VAR_2->state = VAR_0;
 return VAR_3;
}
