
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct uvc_entity {int type; unsigned int num_pads; unsigned int bNrInPins; TYPE_1__* pads; int * baSourceID; scalar_t__ num_links; int id; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uvc_entity*) ;
 int VAR_3 ;
 struct uvc_entity* FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static struct uvc_entity *FUNC_3(u16 VAR_4, u8 VAR_5,
  unsigned int VAR_6, unsigned int VAR_7)
{
 struct uvc_entity *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_7 = FUNC_2(VAR_7, sizeof(*VAR_8->pads));
 VAR_9 = (VAR_4 & VAR_3) ? VAR_6 : VAR_6 - 1;
 VAR_10 = sizeof(*VAR_8) + VAR_7 + sizeof(*VAR_8->pads) * VAR_6
      + VAR_9;
 VAR_8 = FUNC_1(VAR_10, VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->id = VAR_5;
 VAR_8->type = VAR_4;

 VAR_8->num_links = 0;
 VAR_8->num_pads = VAR_6;
 VAR_8->pads = ((void *)(VAR_8 + 1)) + VAR_7;

 for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11)
  VAR_8->pads[VAR_11].flags = VAR_1;
 if (!FUNC_0(VAR_8))
  VAR_8->pads[VAR_6-1].flags = VAR_2;

 VAR_8->bNrInPins = VAR_9;
 VAR_8->baSourceID = (u8 *)(&VAR_8->pads[VAR_6]);

 return VAR_8;
}
