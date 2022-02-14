
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ttusb_dec {int pva_stream_count; } ;
struct dvb_demux_feed {TYPE_1__* demux; } ;
typedef int b0 ;
struct TYPE_2__ {struct ttusb_dec* priv; } ;


 int FUNC_0 (struct ttusb_dec*,int,int,int*,int *,int *) ;
 int FUNC_1 (struct ttusb_dec*) ;

__attribute__((used)) static int FUNC_2(struct dvb_demux_feed *VAR_0)
{
 struct ttusb_dec *VAR_1 = VAR_0->demux->priv;
 u8 VAR_2[] = { 0x00 };

 FUNC_0(VAR_1, 0x81, sizeof(VAR_2), VAR_2, ((void*)0), ((void*)0));

 VAR_1->pva_stream_count--;

 FUNC_1(VAR_1);

 return 0;
}
