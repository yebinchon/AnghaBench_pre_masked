
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct urb {int pipe; TYPE_1__* dev; } ;
struct imx21 {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct imx21*,int,int ,int) ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct imx21 *VAR_8,
 int VAR_9, struct urb *VAR_10, u8 VAR_11, u16 VAR_12)
{
 FUNC_0(VAR_8, VAR_9, 0,
  ((u32) FUNC_1(VAR_10->pipe)) << VAR_0 |
  ((u32) FUNC_2(VAR_10->pipe) << VAR_2) |
  ((u32) VAR_11 << VAR_1) |
  ((u32) ((VAR_10->dev->speed == VAR_6) ?
   1 : 0) << VAR_5) |
  ((u32) VAR_7[FUNC_3(VAR_10->pipe)] << VAR_3) |
  ((u32) VAR_12 << VAR_4));
}
