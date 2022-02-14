
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char,unsigned long) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0, unsigned int VAR_1)
{
 unsigned char VAR_2;
 while (VAR_1--) {
  if (FUNC_0(VAR_2, VAR_0))
   return 0;
  FUNC_1("%02x", VAR_2);
  VAR_0++;
 }
 FUNC_1("\n");
 return 0;
}
