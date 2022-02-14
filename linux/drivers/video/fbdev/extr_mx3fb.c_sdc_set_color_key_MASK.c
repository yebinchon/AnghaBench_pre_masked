
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mx3fb_data {int lock; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mx3fb_data*,int ) ;
 int FUNC_1 (struct mx3fb_data*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mx3fb_data *VAR_5, enum ipu_channel VAR_6,
        bool VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9, VAR_10;
 unsigned long VAR_11;

 FUNC_2(&VAR_5->lock, VAR_11);

 VAR_10 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 == VAR_0)
  VAR_10 &= ~VAR_2;
 else
  VAR_10 |= VAR_2;

 if (VAR_7) {
  VAR_9 = FUNC_0(VAR_5, VAR_4) & 0xFF000000L;
  FUNC_1(VAR_5, VAR_9 | (VAR_8 & 0x00FFFFFFL),
        VAR_4);

  VAR_10 |= VAR_3;
 } else {
  VAR_10 &= ~VAR_3;
 }
 FUNC_1(VAR_5, VAR_10, VAR_1);

 FUNC_3(&VAR_5->lock, VAR_11);

 return 0;
}
