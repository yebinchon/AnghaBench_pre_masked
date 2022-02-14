
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_dev {struct iguanair* priv; } ;
struct iguanair {unsigned int carrier; unsigned int bufsize; int tx_overflow; int lock; TYPE_2__* packet; } ;
struct TYPE_3__ {int cmd; int direction; scalar_t__ start; } ;
struct TYPE_4__ {unsigned int* payload; unsigned int length; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iguanair*,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_4, unsigned *VAR_5, unsigned VAR_6)
{
 struct iguanair *VAR_7 = VAR_4->priv;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 FUNC_3(&VAR_7->lock);


 for (VAR_8 = VAR_9 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_11 = FUNC_0(VAR_5[VAR_8] * VAR_7->carrier, 1000000);
  while (VAR_11) {
   VAR_10 = FUNC_2(VAR_11, 127u);
   if (VAR_9 >= VAR_7->bufsize) {
    VAR_12 = -VAR_2;
    goto out;
   }
   VAR_7->packet->payload[VAR_9++] = VAR_10 | ((VAR_8 & 1) ? 0x80 : 0);
   VAR_11 -= VAR_10;
  }
 }

 VAR_7->packet->header.start = 0;
 VAR_7->packet->header.direction = VAR_1;
 VAR_7->packet->header.cmd = VAR_0;
 VAR_7->packet->length = VAR_9;

 VAR_7->tx_overflow = 0;

 VAR_12 = FUNC_1(VAR_7, sizeof(*VAR_7->packet) + VAR_9);

 if (VAR_12 == 0 && VAR_7->tx_overflow)
  VAR_12 = -VAR_3;

out:
 FUNC_4(&VAR_7->lock);

 return VAR_12 ? VAR_12 : VAR_6;
}
