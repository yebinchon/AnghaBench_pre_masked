
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct rss_header {scalar_t__ opcode; } ;
struct csio_hw {int dummy; } ;
struct csio_fl_dma_buf {int totlen; } ;
struct cpl_fw6_msg {int dummy; } ;
struct cpl_fw4_msg {int dummy; } ;
typedef scalar_t__ __u8 ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 scalar_t__ FUNC_1 (struct csio_hw*,int ,void*,int ,int) ;
 int FUNC_2 (struct csio_hw*,char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct csio_hw *VAR_8, void *VAR_9, uint32_t VAR_10,
     struct csio_fl_dma_buf *VAR_11, void *VAR_12)
{
 __u8 VAR_13;
 void *VAR_14 = ((void*)0);
 uint32_t VAR_15 = 0;
 bool VAR_16 = 0;

 VAR_13 = ((struct rss_header *) VAR_9)->opcode;
 if (VAR_13 == VAR_2) {
  FUNC_0(VAR_8, VAR_5);
  if (!VAR_11 || !VAR_11->totlen) {
   FUNC_0(VAR_8, VAR_6);
   return;
  }

  VAR_14 = (void *) VAR_11;
  VAR_15 = VAR_11->totlen;
  VAR_16 = 1;
 } else if (VAR_13 == VAR_1 || VAR_13 == VAR_0) {

  FUNC_0(VAR_8, VAR_4);

  VAR_14 = (void *)((uintptr_t)VAR_9 + sizeof(__be64));
  VAR_15 = (VAR_13 == VAR_1) ? sizeof(struct cpl_fw6_msg) :
      sizeof(struct cpl_fw4_msg);
 } else {
  FUNC_2(VAR_8, "unexpected CPL %#x on FW event queue\n", VAR_13);
  FUNC_0(VAR_8, VAR_6);
  return;
 }





 if (FUNC_1(VAR_8, VAR_3, VAR_14,
      (uint16_t)VAR_15, VAR_16))
  FUNC_0(VAR_8, VAR_7);
}
