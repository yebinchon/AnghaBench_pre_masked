
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vbi_cc {int even; int odd; } ;
struct TYPE_2__ {scalar_t__ cc_payload_idx; } ;
struct ivtv {TYPE_1__ vbi; int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ivtv*,int ,struct vbi_cc*) ;

void FUNC_2(struct ivtv *VAR_1)
{
 struct vbi_cc VAR_2 = { .odd = { 0x80, 0x80 }, .even = { 0x80, 0x80 } };

 FUNC_0(VAR_0, &VAR_1->i_flags);
 FUNC_1(VAR_1, 0, &VAR_2);
 VAR_1->vbi.cc_payload_idx = 0;
}
