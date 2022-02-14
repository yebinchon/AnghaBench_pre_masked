
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk1160 {int alt; int num_alt; unsigned int* alt_max_pkt_size; int max_pkt_size; int udev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static bool FUNC_2(struct stk1160 *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->alt;
 unsigned int VAR_4;
 bool VAR_5;





 VAR_4 = VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_alt; VAR_2++) {

  if (VAR_1->alt_max_pkt_size[VAR_2] >= VAR_4) {
   VAR_1->alt = VAR_2;
   break;




  } else if (VAR_1->alt_max_pkt_size[VAR_2] >
      VAR_1->alt_max_pkt_size[VAR_1->alt])
   VAR_1->alt = VAR_2;
 }

 FUNC_0("setting alternate %d\n", VAR_1->alt);

 if (VAR_1->alt != VAR_3) {
  FUNC_0("minimum isoc packet size: %u (alt=%d)\n",
    VAR_4, VAR_1->alt);
  FUNC_0("setting alt %d with wMaxPacketSize=%u\n",
          VAR_1->alt, VAR_1->alt_max_pkt_size[VAR_1->alt]);
  FUNC_1(VAR_1->udev, 0, VAR_1->alt);
 }

 VAR_5 = VAR_1->max_pkt_size != VAR_1->alt_max_pkt_size[VAR_1->alt];
 VAR_1->max_pkt_size = VAR_1->alt_max_pkt_size[VAR_1->alt];

 return VAR_5;
}
