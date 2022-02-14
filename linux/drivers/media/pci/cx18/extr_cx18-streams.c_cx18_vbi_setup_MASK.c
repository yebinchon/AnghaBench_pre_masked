
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct cx18_stream {int handle; struct cx18* cx; } ;
struct TYPE_4__ {int sliced; int vbi; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct TYPE_6__ {int count; int* start; TYPE_2__ in; } ;
struct cx18 {scalar_t__ is_60hz; TYPE_3__ vbi; int sd_av; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cx18*,int ,int,int*) ;
 int FUNC_2 (struct cx18*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct cx18_stream *VAR_8)
{
 struct cx18 *VAR_9 = VAR_8->cx;
 int VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11[VAR_1];
 int VAR_12;

 if (VAR_9->is_60hz) {
  VAR_9->vbi.count = 12;
  VAR_9->vbi.start[0] = 10;
  VAR_9->vbi.start[1] = 273;
 } else {
  VAR_9->vbi.count = 18;
  VAR_9->vbi.start[0] = 6;
  VAR_9->vbi.start[1] = 318;
 }


 if (VAR_10)
  FUNC_3(VAR_9->sd_av, VAR_7, VAR_5, &VAR_9->vbi.in.fmt.vbi);
 else
  FUNC_3(VAR_9->sd_av, VAR_7, VAR_6, &VAR_9->vbi.in.fmt.sliced);
 if (VAR_10) {
  VAR_12 = VAR_9->vbi.count * 2;
 } else {
  VAR_12 = VAR_9->is_60hz ? (21 - 4 + 1) * 2 : (23 - 2 + 1) * 2;
 }

 VAR_11[0] = VAR_8->handle;

 VAR_11[1] = (VAR_12 / 2) | ((VAR_12 / 2) << 16);

 VAR_11[2] = (VAR_10 ? VAR_2
         : (VAR_9->is_60hz ? VAR_4
          : VAR_3));


 VAR_11[3] = 1;




 if (VAR_10) {





  VAR_11[4] = 0x20602060;







  VAR_11[5] = 0x307090d0;
 } else {
  VAR_11[4] = 0xB0F0B0F0;





  VAR_11[5] = 0xA0E0A0E0;
 }

 FUNC_0("Setup VBI h: %d lines %x bpl %d fr %d %x %x\n",
   VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3], VAR_11[4], VAR_11[5]);

 FUNC_1(VAR_9, VAR_0, 6, VAR_11);
}
