
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ene_device {int r_pointer; int w_pointer; int buffer_len; int extra_buf1_len; int extra_buf1_address; int extra_buf2_len; int extra_buf2_address; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ene_device*) ;

__attribute__((used)) static int FUNC_3(struct ene_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->r_pointer == VAR_1->w_pointer) {
  FUNC_1("RB: hit end, try update w_pointer");
  FUNC_2(VAR_1);
 }

 if (VAR_1->r_pointer == VAR_1->w_pointer) {
  FUNC_1("RB: end of data at %d", VAR_1->r_pointer);
  return 0;
 }

 FUNC_1("RB: reading at offset %d", VAR_1->r_pointer);
 VAR_2 = VAR_1->r_pointer;

 VAR_1->r_pointer++;
 if (VAR_1->r_pointer == VAR_1->buffer_len)
  VAR_1->r_pointer = 0;

 FUNC_1("RB: next read will be from offset %d", VAR_1->r_pointer);

 if (VAR_2 < 8) {
  FUNC_1("RB: read at main buffer at %d", VAR_2);
  return VAR_0 + VAR_2;
 }

 VAR_2 -= 8;

 if (VAR_2 < VAR_1->extra_buf1_len) {
  FUNC_1("RB: read at 1st extra buffer at %d", VAR_2);
  return VAR_1->extra_buf1_address + VAR_2;
 }

 VAR_2 -= VAR_1->extra_buf1_len;

 if (VAR_2 < VAR_1->extra_buf2_len) {
  FUNC_1("RB: read at 2nd extra buffer at %d", VAR_2);
  return VAR_1->extra_buf2_address + VAR_2;
 }

 FUNC_0("attempt to read beyond ring buffer end");
 return 0;
}
