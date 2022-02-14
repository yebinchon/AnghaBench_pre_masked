
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int status; scalar_t__ conf; } ;
struct dp_altmode {void* state; TYPE_1__ data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dp_altmode*,int) ;

__attribute__((used)) static int FUNC_4(struct dp_altmode *VAR_4)
{
 bool VAR_5 = !!FUNC_1(VAR_4->data.conf);
 u8 VAR_6 = FUNC_2(VAR_4->data.status);
 int VAR_7 = 0;

 if (VAR_5 && (VAR_4->data.status & VAR_3)) {
  VAR_4->data.conf = 0;
  VAR_4->state = VAR_0;
 } else if (VAR_4->data.status & VAR_2) {
  VAR_4->state = VAR_1;
 } else if (!(VAR_6 & FUNC_0(VAR_4->data.conf))) {
  VAR_7 = FUNC_3(VAR_4, VAR_6);
  if (!VAR_7)
   VAR_4->state = VAR_0;
 }

 return VAR_7;
}
