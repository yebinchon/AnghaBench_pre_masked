
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_device {unsigned int size; unsigned int bits_per_pin; unsigned int width; scalar_t__ bits_per_mux; int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pcs_device *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 if (VAR_3 >= VAR_2->size) {
  FUNC_0(VAR_2->dev, "mux offset out of range: 0x%x (0x%x)\n",
   VAR_3, VAR_2->size);
  return -VAR_1;
 }

 if (VAR_2->bits_per_mux)
  VAR_4 = (VAR_3 * VAR_0) / VAR_2->bits_per_pin;
 else
  VAR_4 = VAR_3 / (VAR_2->width / VAR_0);

 return VAR_4;
}
