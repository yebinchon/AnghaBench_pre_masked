
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {TYPE_3__* dev; TYPE_1__* ep; } ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct mon_reader_bin {int b_wait; int b_lock; } ;
struct mon_bin_hdr {char type; unsigned long id; int ts_usec; int status; char flag_setup; char flag_data; int ts_sec; int busnum; int devnum; int epnum; int xfer_type; } ;
struct TYPE_6__ {TYPE_2__* bus; int devnum; } ;
struct TYPE_5__ {int busnum; } ;
struct TYPE_4__ {int desc; } ;


 struct mon_bin_hdr* FUNC_0 (struct mon_reader_bin*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct timespec64*) ;
 int FUNC_2 (struct mon_bin_hdr*,int ,int ) ;
 unsigned int FUNC_3 (struct mon_reader_bin*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct urb*) ;
 int FUNC_9 (int *) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_10(void *VAR_4, struct urb *VAR_5, int VAR_6)
{
 struct mon_reader_bin *VAR_7 = VAR_4;
 struct timespec64 VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;
 struct mon_bin_hdr *VAR_11;

 FUNC_1(&VAR_8);

 FUNC_4(&VAR_7->b_lock, VAR_9);

 VAR_10 = FUNC_3(VAR_7, VAR_1);
 if (VAR_10 == ~0) {

  FUNC_5(&VAR_7->b_lock, VAR_9);
  return;
 }

 VAR_11 = FUNC_0(VAR_7, VAR_10);

 FUNC_2(VAR_11, 0, VAR_1);
 VAR_11->type = 'E';
 VAR_11->xfer_type = VAR_3[FUNC_7(&VAR_5->ep->desc)];
 VAR_11->epnum = FUNC_8(VAR_5) ? VAR_2 : 0;
 VAR_11->epnum |= FUNC_6(&VAR_5->ep->desc);
 VAR_11->devnum = VAR_5->dev->devnum;
 VAR_11->busnum = VAR_5->dev->bus->busnum;
 VAR_11->id = (unsigned long) VAR_5;
 VAR_11->ts_sec = VAR_8.tv_sec;
 VAR_11->ts_usec = VAR_8.tv_nsec / VAR_0;
 VAR_11->status = VAR_6;

 VAR_11->flag_setup = '-';
 VAR_11->flag_data = 'E';

 FUNC_5(&VAR_7->b_lock, VAR_9);

 FUNC_9(&VAR_7->b_wait);
}
