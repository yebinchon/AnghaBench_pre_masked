
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int status; } ;
struct ucsi_dp {int vdo_size; TYPE_2__ data; int * vdo_data; TYPE_1__* alt; } ;
struct TYPE_3__ {int vdo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct ucsi_dp *VAR_6)
{
 u32 VAR_7 = VAR_6->alt->vdo;

 VAR_6->data.status = VAR_4;





 if (FUNC_1(VAR_7) & VAR_0) {
  VAR_6->data.status |= VAR_3;

  if (FUNC_3(VAR_7) & FUNC_0(VAR_1))
   VAR_6->data.status |= VAR_5;
 } else {
  VAR_6->data.status |= VAR_2;

  if (FUNC_2(VAR_7) & FUNC_0(VAR_1))
   VAR_6->data.status |= VAR_5;
 }

 VAR_6->vdo_data = &VAR_6->data.status;
 VAR_6->vdo_size = 2;

 return 0;
}
