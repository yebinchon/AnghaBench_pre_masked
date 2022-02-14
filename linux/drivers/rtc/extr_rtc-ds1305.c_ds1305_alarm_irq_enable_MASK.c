
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1305 {int* ctrl; int spi; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 struct ds1305* FUNC_0 (struct device*) ;
 long FUNC_1 (int ,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, unsigned int VAR_5)
{
 struct ds1305 *VAR_6 = FUNC_0(VAR_4);
 u8 VAR_7[2];
 long VAR_8 = -VAR_3;

 VAR_7[0] = VAR_2 | VAR_1;
 VAR_7[1] = VAR_6->ctrl[0];

 if (VAR_5) {
  if (VAR_6->ctrl[0] & VAR_0)
   goto done;
  VAR_7[1] |= VAR_0;
 } else {
  if (!(VAR_7[1] & VAR_0))
   goto done;
  VAR_7[1] &= ~VAR_0;
 }
 VAR_8 = FUNC_1(VAR_6->spi, VAR_7, sizeof(VAR_7), ((void*)0), 0);
 if (VAR_8 >= 0)
  VAR_6->ctrl[0] = VAR_7[1];
done:
 return VAR_8;

}
