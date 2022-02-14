
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct de_private {int media_type; int media_supported; int media_advertise; TYPE_1__* media; } ;
struct TYPE_2__ {unsigned int type; int csr15; int csr14; int csr13; } ;


 unsigned int VAR_0 ;

 unsigned int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_0(struct de_private *VAR_9)
{
 unsigned int VAR_10;

 VAR_9->media_type = 129;
 VAR_9->media_supported |= VAR_5 | VAR_2 |
          VAR_3 | VAR_4;
 VAR_9->media_advertise = VAR_9->media_supported;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  switch (VAR_10) {
  case 130:
  case 129:
  case 128:
   VAR_9->media[VAR_10].type = VAR_10;
   VAR_9->media[VAR_10].csr13 = VAR_6[VAR_10];
   VAR_9->media[VAR_10].csr14 = VAR_7[VAR_10];
   VAR_9->media[VAR_10].csr15 = VAR_8[VAR_10];
   break;
  default:
   VAR_9->media[VAR_10].type = VAR_1;
   break;
  }
 }
}
