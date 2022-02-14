
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
typedef TYPE_1__* PPGPKT_STRUCT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,int,int *,TYPE_1__*,int) ;
 int FUNC_1 (struct adapter*,int,int *,TYPE_1__*,int) ;

__attribute__((used)) static u8 FUNC_2(
 struct adapter *VAR_1,
 u8 VAR_2,
 u16 *VAR_3,
 PPGPKT_STRUCT VAR_4,
 u8 VAR_5
)
{
 u8 VAR_6 = 0;

 if (VAR_4->offset >= VAR_0)
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
