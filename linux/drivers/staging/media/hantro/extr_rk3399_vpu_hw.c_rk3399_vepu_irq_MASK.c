
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hantro_dev {int dummy; } ;
typedef int irqreturn_t ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hantro_dev*,int,int) ;
 int FUNC_1 (struct hantro_dev*,int ) ;
 int FUNC_2 (struct hantro_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct hantro_dev *VAR_9 = VAR_8;
 enum vb2_buffer_state VAR_10;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_9, VAR_4);
 VAR_12 = FUNC_1(VAR_9, VAR_6) / 8;
 VAR_10 = (VAR_11 & VAR_5) ?
  VAR_1 : VAR_2;

 FUNC_2(VAR_9, 0, VAR_4);
 FUNC_2(VAR_9, 0, VAR_3);

 FUNC_0(VAR_9, VAR_12, VAR_10);

 return VAR_0;
}
