
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapleq {unsigned long* sendbuf; int length; int command; TYPE_2__* recvbuf; TYPE_1__* dev; } ;
struct TYPE_4__ {int buf; } ;
struct TYPE_3__ {int port; int unit; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mapleq *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long *VAR_8 = VAR_2->sendbuf;

 VAR_3 = VAR_2->dev->port & 3;
 VAR_4 = VAR_2->dev->unit;
 VAR_7 = VAR_2->length;
 VAR_5 = VAR_3 << 6;
 VAR_6 = (VAR_3 << 6) | (VAR_4 > 0 ? (1 << (VAR_4 - 1)) & 0x1f : 0x20);

 *VAR_0 &= 0x7fffffff;
 VAR_0 = VAR_1;

 *VAR_1++ = (VAR_3 << 16) | VAR_7 | 0x80000000;
 *VAR_1++ = FUNC_0(VAR_2->recvbuf->buf);
 *VAR_1++ =
     VAR_2->command | (VAR_6 << 8) | (VAR_5 << 16) | (VAR_7 << 24);
 while (VAR_7-- > 0)
  *VAR_1++ = *VAR_8++;
}
