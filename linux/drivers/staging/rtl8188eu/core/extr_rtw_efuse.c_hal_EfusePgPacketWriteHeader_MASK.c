
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pgpkt {scalar_t__ offset; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int *,struct pgpkt*) ;
 int FUNC_1 (struct adapter*,int ,int *,struct pgpkt*) ;

__attribute__((used)) static bool
FUNC_2(
    struct adapter *VAR_1,
    u8 VAR_2,
    u16 *VAR_3,
    struct pgpkt *VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_4->offset >= VAR_0)
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
