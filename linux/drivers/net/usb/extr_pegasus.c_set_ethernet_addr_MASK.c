
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int features; TYPE_1__* net; } ;
typedef TYPE_2__ pegasus_t ;
typedef int node_id ;
typedef int __u8 ;
struct TYPE_7__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int,int,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,int,int *) ;

__attribute__((used)) static void FUNC_4(pegasus_t *VAR_2)
{
 __u8 VAR_3[6];

 if (VAR_2->features & VAR_1) {
  FUNC_1(VAR_2, 0x10, sizeof(VAR_3), VAR_3);
 } else {
  FUNC_0(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_0, sizeof(VAR_3), VAR_3);
 }
 FUNC_2(VAR_2->net->dev_addr, VAR_3, sizeof(VAR_3));
}
