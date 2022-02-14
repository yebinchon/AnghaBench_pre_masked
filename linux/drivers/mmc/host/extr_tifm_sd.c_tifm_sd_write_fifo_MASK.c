
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_sd {int cmd_flags; unsigned char* bounce_buf_data; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char* FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tifm_sd *VAR_2, struct page *VAR_3,
          unsigned int VAR_4, unsigned int VAR_5)
{
 struct tifm_dev *VAR_6 = VAR_2->dev;
 unsigned char *VAR_7;
 unsigned int VAR_8 = 0, VAR_9;

 VAR_7 = FUNC_0(VAR_3) + VAR_4;
 if (VAR_2->cmd_flags & VAR_0) {
  VAR_9 = VAR_2->bounce_buf_data[0] | ((VAR_7[VAR_8++] << 8) & 0xff00);
  FUNC_2(VAR_9, VAR_6->addr + VAR_1);
  VAR_2->cmd_flags &= ~VAR_0;
 }

 while (VAR_8 < VAR_5) {
  VAR_9 = VAR_7[VAR_8++];
  if (VAR_8 == VAR_5) {
   VAR_2->bounce_buf_data[0] = VAR_9 & 0xff;
   VAR_2->cmd_flags |= VAR_0;
   break;
  }
  VAR_9 |= (VAR_7[VAR_8++] << 8) & 0xff00;
  FUNC_2(VAR_9, VAR_6->addr + VAR_1);
 }
 FUNC_1(VAR_7 - VAR_4);
}
