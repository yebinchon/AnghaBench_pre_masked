
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stype; int sid; int stype_env; int type; } ;
struct vio_vcc {int * data; TYPE_1__ tag; } ;
struct TYPE_4__ {int lp; } ;
struct vcc_port {size_t chars_in_buffer; int lock; TYPE_2__ vio; struct vio_vcc buffer; } ;
struct tty_struct {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct vio_vcc*,int) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 struct vcc_port* FUNC_7 (int ) ;
 int FUNC_8 (struct vcc_port*) ;
 int FUNC_9 (struct vcc_port*,int) ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_6, const unsigned char *VAR_7,
       int VAR_8)
{
 struct vcc_port *VAR_9;
 struct vio_vcc *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = -VAR_0;

 if (FUNC_6(!VAR_6)) {
  FUNC_3("VCC: write: Invalid TTY handle\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_7(VAR_6->index);
 if (FUNC_6(!VAR_9)) {
  FUNC_3("VCC: write: Failed to find VCC port");
  return -VAR_1;
 }

 FUNC_4(&VAR_9->lock, VAR_11);

 VAR_10 = &VAR_9->buffer;
 VAR_10->tag.type = VAR_5;

 while (VAR_8 > 0) {

  VAR_13 = FUNC_2(VAR_8, (VAR_3 - VAR_9->chars_in_buffer));

  if (!VAR_13)
   break;

  FUNC_1(&VAR_10->data[VAR_9->chars_in_buffer], &VAR_7[VAR_12],
         VAR_13);
  VAR_9->chars_in_buffer += VAR_13;
  VAR_10->tag.stype = VAR_13;

  FUNC_10("TAG [%02x:%02x:%04x:%08x]\n", VAR_10->tag.type,
         VAR_10->tag.stype, VAR_10->tag.stype_env, VAR_10->tag.sid);
  FUNC_10("DATA [%s]\n", *VAR_10->data);
  FUNC_11(VAR_9->vio.lp);





  VAR_14 = FUNC_0(VAR_9->vio.lp, VAR_10, (VAR_4 + VAR_13));
  FUNC_10("VCC: write: ldc_write(%d)=%d\n",
         (VAR_4 + VAR_13), VAR_14);

  VAR_12 += VAR_13;
  VAR_8 -= VAR_13;
  if (VAR_14 < 0) {
   FUNC_8(VAR_9);
   break;
  }

  VAR_9->chars_in_buffer = 0;
 }

 FUNC_5(&VAR_9->lock, VAR_11);

 FUNC_9(VAR_9, 0);

 FUNC_10("VCC: write: total=%d rv=%d", VAR_12, VAR_14);

 return VAR_12 ? VAR_12 : VAR_14;
}
