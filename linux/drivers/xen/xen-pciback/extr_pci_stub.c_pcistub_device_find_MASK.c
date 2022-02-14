
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcistub_device {int dummy; } ;


 struct pcistub_device* FUNC_0 (int,int,int,int) ;
 int FUNC_1 (struct pcistub_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct pcistub_device *FUNC_4(int VAR_1, int VAR_2,
        int VAR_3, int VAR_4)
{
 struct pcistub_device *VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_0, VAR_6);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_5);

 FUNC_3(&VAR_0, VAR_6);
 return VAR_5;
}
