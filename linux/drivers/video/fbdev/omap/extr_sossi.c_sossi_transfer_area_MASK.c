
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* lcdc_callback ) (void*) ;int bus_pick_width; int lock; int vsync_dma_pending; scalar_t__ tearsync_mode; int tearsync_line; int bus_pick_count; int fck; void* lcdc_callback_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(int VAR_3, int VAR_4,
    void (VAR_5)(void *VAR_6), void *VAR_7)
{
 FUNC_0(VAR_5 == ((void*)0));

 VAR_2.lcdc_callback = VAR_5;
 VAR_2.lcdc_callback_data = VAR_7;

 FUNC_3(VAR_2.fck);
 FUNC_6(VAR_1);
 FUNC_1(VAR_2.bus_pick_count, VAR_2.bus_pick_width);
 FUNC_2(VAR_2.tearsync_mode, VAR_2.tearsync_line);

 FUNC_7(VAR_0, 1 << 18);
 FUNC_5(VAR_3 * VAR_4 * VAR_2.bus_pick_width / 8);

 FUNC_8();
 if (VAR_2.tearsync_mode) {






  unsigned long VAR_8;

  FUNC_9(&VAR_2.lock, VAR_8);
  VAR_2.vsync_dma_pending++;
  FUNC_10(&VAR_2.lock, VAR_8);
 } else

  FUNC_4();
}
