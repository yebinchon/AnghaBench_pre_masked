
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;
struct fd {int file; } ;


 int VAR_0 ;
 struct pid* FUNC_0 (int ) ;
 int FUNC_1 (struct pid*) ;
 struct fd FUNC_2 (unsigned int) ;
 int FUNC_3 (struct fd) ;
 int FUNC_4 (struct pid*) ;
 struct pid* FUNC_5 (int ) ;

__attribute__((used)) static struct pid *FUNC_6(unsigned int VAR_1)
{
 struct fd VAR_2;
 struct pid *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2.file)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_5(VAR_2.file);
 if (!FUNC_1(VAR_3))
  FUNC_4(VAR_3);

 FUNC_3(VAR_2);
 return VAR_3;
}
