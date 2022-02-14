
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int* is_registered; int protos_registered; } ;


 int FUNC_0 (void*,char*,int ,char,char,char) ;

void FUNC_1(struct st_data_s *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_1, "[%d]\nBT=%c\nFM=%c\nGPS=%c\n",
   VAR_0->protos_registered,
   VAR_0->is_registered[0x04] == 1 ? 'R' : 'U',
   VAR_0->is_registered[0x08] == 1 ? 'R' : 'U',
   VAR_0->is_registered[0x09] == 1 ? 'R' : 'U');
}
