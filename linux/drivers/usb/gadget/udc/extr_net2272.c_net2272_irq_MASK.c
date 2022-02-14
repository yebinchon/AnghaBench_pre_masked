
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ fpga_base_addr; } ;
struct TYPE_3__ {scalar_t__ plx9054_base_addr; } ;
struct net2272 {int lock; TYPE_2__ rdk2; int * ep; TYPE_1__ rdk1; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net2272*,int) ;
 int FUNC_2 (struct net2272*,int) ;
 int FUNC_3 (struct net2272*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_14, void *VAR_15)
{
 struct net2272 *VAR_16 = VAR_15;






 FUNC_5(&VAR_16->lock);
 FUNC_2(VAR_16, FUNC_3(VAR_16, VAR_7));
 FUNC_1(VAR_16, FUNC_3(VAR_16, VAR_6));

 FUNC_6(&VAR_16->lock);

 return VAR_8;
}
