
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {scalar_t__ server_eof; } ;
typedef scalar_t__ loff_t ;



void
FUNC_0(struct cifsInodeInfo *VAR_0, loff_t VAR_1,
        unsigned int VAR_2)
{
 loff_t VAR_3 = VAR_1 + VAR_2;

 if (VAR_3 > VAR_0->server_eof)
  VAR_0->server_eof = VAR_3;
}
