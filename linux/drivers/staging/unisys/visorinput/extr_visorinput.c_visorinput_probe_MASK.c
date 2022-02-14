
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int visorchannel; } ;
typedef int guid_t ;
typedef enum visorinput_dev_type { ____Placeholder_visorinput_dev_type } visorinput_dev_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct visor_device*,int) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct visor_device*) ;
 int * FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct visor_device *VAR_6)
{
 const guid_t *VAR_7;
 enum visorinput_dev_type VAR_8;

 VAR_7 = FUNC_3(VAR_6->visorchannel);
 if (FUNC_1(VAR_7, &VAR_3))
  VAR_8 = VAR_5;
 else if (FUNC_1(VAR_7, &VAR_2))
  VAR_8 = VAR_4;
 else
  return -VAR_0;
 FUNC_2(VAR_6);
 if (!FUNC_0(VAR_6, VAR_8))
  return -VAR_1;
 return 0;
}
