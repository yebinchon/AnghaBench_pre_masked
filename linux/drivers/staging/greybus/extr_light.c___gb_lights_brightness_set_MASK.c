
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_channel {scalar_t__ releasing; } ;


 int FUNC_0 (struct gb_channel*) ;
 int FUNC_1 (struct gb_channel*) ;
 scalar_t__ FUNC_2 (struct gb_channel*) ;

__attribute__((used)) static int FUNC_3(struct gb_channel *VAR_0)
{
 int VAR_1;

 if (VAR_0->releasing)
  return 0;

 if (FUNC_2(VAR_0))
  VAR_1 = FUNC_0(VAR_0);
 else
  VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
