
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct urb {unsigned int transfer_buffer_length; unsigned int actual_length; unsigned int number_of_packets; int error_count; int start_frame; int interval; int transfer_flags; TYPE_3__* dev; TYPE_1__* ep; } ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct mon_reader_bin {int b_size; int b_wait; int b_lock; int cnt_lost; scalar_t__ mmap_active; } ;
struct mon_bin_isodesc {int dummy; } ;
struct TYPE_9__ {unsigned int numdesc; int error_count; } ;
struct TYPE_10__ {int setup; TYPE_4__ iso; } ;
struct mon_bin_hdr {char type; unsigned char epnum; unsigned long id; int ts_usec; int status; unsigned int len_urb; unsigned int len_cap; char flag_setup; unsigned int ndesc; char flag_data; TYPE_5__ s; int start_frame; int interval; int xfer_flags; int ts_sec; int busnum; int devnum; int xfer_type; } ;
struct TYPE_8__ {TYPE_2__* bus; int devnum; } ;
struct TYPE_7__ {int busnum; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 unsigned int VAR_0 ;
 struct mon_bin_hdr* FUNC_0 (struct mon_reader_bin*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (struct timespec64*) ;
 int FUNC_2 (struct mon_bin_hdr*,int ,int) ;
 unsigned int FUNC_3 (struct mon_reader_bin*,struct urb*,unsigned int) ;
 unsigned int FUNC_4 (struct mon_reader_bin*,unsigned int,struct urb*,unsigned int,char*) ;
 int FUNC_5 (struct mon_reader_bin*,unsigned int,struct urb*,char,unsigned int) ;
 char FUNC_6 (int ,struct urb*,char) ;
 unsigned int FUNC_7 (struct mon_reader_bin*,int) ;
 unsigned int FUNC_8 (struct mon_reader_bin*,int) ;
 int FUNC_9 (struct mon_reader_bin*,unsigned int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 unsigned char FUNC_12 (struct usb_endpoint_descriptor const*) ;
 size_t FUNC_13 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_16 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_17 (struct urb*) ;
 int FUNC_18 (int *) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_19(struct mon_reader_bin *VAR_6, struct urb *VAR_7,
    char VAR_8, int VAR_9)
{
 const struct usb_endpoint_descriptor *VAR_10 = &VAR_7->ep->desc;
 struct timespec64 VAR_11;
 unsigned long VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned char VAR_19;
 struct mon_bin_hdr *VAR_20;
 char VAR_21 = 0;

 FUNC_1(&VAR_11);

 FUNC_10(&VAR_6->b_lock, VAR_12);




 VAR_13 = (VAR_8 == 'S') ?
     VAR_7->transfer_buffer_length : VAR_7->actual_length;
 VAR_15 = VAR_13;

 if (FUNC_16(VAR_10)) {
  if (VAR_7->number_of_packets < 0) {
   VAR_17 = 0;
  } else if (VAR_7->number_of_packets >= VAR_0) {
   VAR_17 = VAR_0;
  } else {
   VAR_17 = VAR_7->number_of_packets;
  }
  if (VAR_8 == 'C' && FUNC_17(VAR_7))
   VAR_15 = FUNC_3(VAR_6, VAR_7, VAR_17);
 } else {
  VAR_17 = 0;
 }
 VAR_18 = VAR_17*sizeof(struct mon_bin_isodesc);


 if (VAR_15 >= VAR_7->transfer_buffer_length)
  VAR_15 = VAR_7->transfer_buffer_length;

 if (VAR_15 >= VAR_6->b_size/5)
  VAR_15 = VAR_6->b_size/5;

 if (FUNC_17(VAR_7)) {
  if (VAR_8 == 'S') {
   VAR_15 = 0;
   VAR_21 = '<';
  }

  VAR_19 = VAR_4;
 } else {
  if (VAR_8 == 'C') {
   VAR_15 = 0;
   VAR_21 = '>';
  }
  VAR_19 = 0;
 }

 if (VAR_6->mmap_active) {
  VAR_14 = FUNC_8(VAR_6,
       VAR_15 + VAR_3 + VAR_18);
 } else {
  VAR_14 = FUNC_7(VAR_6, VAR_15 + VAR_3 + VAR_18);
 }
 if (VAR_14 == ~0) {
  VAR_6->cnt_lost++;
  FUNC_11(&VAR_6->b_lock, VAR_12);
  return;
 }

 VAR_20 = FUNC_0(VAR_6, VAR_14);
 if ((VAR_14 += VAR_3) >= VAR_6->b_size) VAR_14 = 0;




 FUNC_2(VAR_20, 0, VAR_3);
 VAR_20->type = VAR_8;
 VAR_20->xfer_type = VAR_5[FUNC_13(VAR_10)];
 VAR_20->epnum = VAR_19 | FUNC_12(VAR_10);
 VAR_20->devnum = VAR_7->dev->devnum;
 VAR_20->busnum = VAR_7->dev->bus->busnum;
 VAR_20->id = (unsigned long) VAR_7;
 VAR_20->ts_sec = VAR_11.tv_sec;
 VAR_20->ts_usec = VAR_11.tv_nsec / VAR_1;
 VAR_20->status = VAR_9;
 VAR_20->len_urb = VAR_13;
 VAR_20->len_cap = VAR_15 + VAR_18;
 VAR_20->xfer_flags = VAR_7->transfer_flags;

 if (FUNC_15(VAR_10)) {
  VAR_20->interval = VAR_7->interval;
 } else if (FUNC_16(VAR_10)) {
  VAR_20->interval = VAR_7->interval;
  VAR_20->start_frame = VAR_7->start_frame;
  VAR_20->s.iso.error_count = VAR_7->error_count;
  VAR_20->s.iso.numdesc = VAR_7->number_of_packets;
 }

 if (FUNC_14(VAR_10) && VAR_8 == 'S') {
  VAR_20->flag_setup = FUNC_6(VAR_20->s.setup, VAR_7, VAR_8);
 } else {
  VAR_20->flag_setup = '-';
 }

 if (VAR_17 != 0) {
  VAR_20->ndesc = VAR_17;
  FUNC_5(VAR_6, VAR_14, VAR_7, VAR_8, VAR_17);
  if ((VAR_14 += VAR_18) >= VAR_6->b_size)
   VAR_14 -= VAR_6->b_size;
 }

 if (VAR_15 != 0) {
  VAR_15 = FUNC_4(VAR_6, VAR_14, VAR_7, VAR_15,
    &VAR_20->flag_data);
  if (VAR_15 > 0) {
   VAR_16 = (VAR_20->len_cap + VAR_2-1) & ~(VAR_2-1);
   VAR_20->len_cap -= VAR_15;
   VAR_16 -= (VAR_20->len_cap + VAR_2-1) & ~(VAR_2-1);
   FUNC_9(VAR_6, VAR_16);
  }
 } else {
  VAR_20->flag_data = VAR_21;
 }

 FUNC_11(&VAR_6->b_lock, VAR_12);

 FUNC_18(&VAR_6->b_wait);
}
