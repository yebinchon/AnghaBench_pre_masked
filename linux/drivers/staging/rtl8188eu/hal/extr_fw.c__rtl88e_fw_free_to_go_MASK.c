
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_7)
{
 int VAR_8 = -VAR_0;
 u32 VAR_9 = 0;
 u32 VAR_10;

 do {
  VAR_10 = FUNC_2(VAR_7, VAR_5);
  if (VAR_10 & VAR_1)
   break;
 } while (VAR_9++ < VAR_4);

 if (VAR_9 >= VAR_4)
  goto exit;

 VAR_10 = FUNC_2(VAR_7, VAR_5);
 VAR_10 |= VAR_3;
 VAR_10 &= ~VAR_6;
 FUNC_3(VAR_7, VAR_5, VAR_10);

 FUNC_0(VAR_7);
 VAR_9 = 0;

 do {
  VAR_10 = FUNC_2(VAR_7, VAR_5);
  if (VAR_10 & VAR_6) {
   VAR_8 = 0;
   goto exit;
  }

  FUNC_1(VAR_2);

 } while (VAR_9++ < VAR_4);

exit:
 return VAR_8;
}
