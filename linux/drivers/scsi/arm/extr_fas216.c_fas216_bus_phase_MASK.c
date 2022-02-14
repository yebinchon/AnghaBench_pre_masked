
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static const char *FUNC_0(int VAR_1)
{
 static const char *VAR_2[] = {
  "DATA OUT", "DATA IN",
  "COMMAND", "STATUS",
  "MISC OUT", "MISC IN",
  "MESG OUT", "MESG IN"
 };

 return VAR_2[VAR_1 & VAR_0];
}
