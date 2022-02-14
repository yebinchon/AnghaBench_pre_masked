
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct airo_info {TYPE_1__* dev; int flags; } ;
struct TYPE_2__ {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (scalar_t__) ;
 unsigned short FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static u16 FUNC_3( struct airo_info *VAR_2, u16 VAR_3 ) {
 unsigned short VAR_4;

 if (FUNC_2(VAR_0,&VAR_2->flags))
  VAR_3 <<= 1;
 if ( !VAR_1 )
  VAR_4 = FUNC_1( VAR_2->dev->base_addr + VAR_3 );
 else {
  VAR_4 = FUNC_0( VAR_2->dev->base_addr + VAR_3 );
  VAR_4 += ((int)FUNC_0( VAR_2->dev->base_addr + VAR_3 + 1 )) << 8;
 }
 return VAR_4;
}
