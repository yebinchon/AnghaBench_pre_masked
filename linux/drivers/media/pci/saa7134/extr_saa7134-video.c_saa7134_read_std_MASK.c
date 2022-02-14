
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct saa7134_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ) ;

__attribute__((used)) static v4l2_std_id FUNC_1(struct saa7134_dev *VAR_2)
{
 static v4l2_std_id VAR_3[] = {
  128,
  131,
  130,
  129 };

 v4l2_std_id VAR_4 = 0;

 u8 VAR_5 = FUNC_0(VAR_0);
 u8 VAR_6 = FUNC_0(VAR_1);

 if (!(VAR_6 & 0x1))
  VAR_4 = 128;
 else
  VAR_4 = VAR_3[VAR_5 & 0x03];

 return VAR_4;
}
