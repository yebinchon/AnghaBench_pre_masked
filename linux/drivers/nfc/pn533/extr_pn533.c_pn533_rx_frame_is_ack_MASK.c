
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533_std_frame {scalar_t__ start_frame; scalar_t__ datalen; int datalen_checksum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(void *VAR_1)
{
 struct pn533_std_frame *VAR_2 = VAR_1;

 if (VAR_2->start_frame != FUNC_0(VAR_0))
  return 0;

 if (VAR_2->datalen != 0 || VAR_2->datalen_checksum != 0xFF)
  return 0;

 return 1;
}
