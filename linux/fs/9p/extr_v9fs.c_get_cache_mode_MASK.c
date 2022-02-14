
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_6)
{
 int VAR_7 = -VAR_4;

 if (!FUNC_2(VAR_6, "loose")) {
  VAR_7 = VAR_1;
  FUNC_0(VAR_5, "Cache mode: loose\n");
 } else if (!FUNC_2(VAR_6, "fscache")) {
  VAR_7 = VAR_0;
  FUNC_0(VAR_5, "Cache mode: fscache\n");
 } else if (!FUNC_2(VAR_6, "mmap")) {
  VAR_7 = VAR_2;
  FUNC_0(VAR_5, "Cache mode: mmap\n");
 } else if (!FUNC_2(VAR_6, "none")) {
  VAR_7 = VAR_3;
  FUNC_0(VAR_5, "Cache mode: none\n");
 } else
  FUNC_1("Unknown Cache mode %s\n", VAR_6);
 return VAR_7;
}
