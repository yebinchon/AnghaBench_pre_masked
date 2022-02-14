
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_record {scalar_t__ size; struct pstore_record* buf; } ;
struct pstore_info {scalar_t__ (* read ) (struct pstore_record*) ;int name; int read_mutex; int (* close ) (struct pstore_info*) ;scalar_t__ (* open ) (struct pstore_info*) ;} ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pstore_record*) ;
 int FUNC_1 (struct pstore_record*) ;
 struct pstore_record* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (struct dentry*,struct pstore_record*) ;
 int FUNC_8 (struct pstore_record*,struct pstore_info*) ;
 scalar_t__ FUNC_9 (struct pstore_info*) ;
 scalar_t__ FUNC_10 (struct pstore_record*) ;
 int FUNC_11 (struct pstore_info*) ;

void FUNC_12(struct pstore_info *VAR_2,
    struct dentry *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6 = 65536;

 if (!VAR_2 || !VAR_3)
  return;

 FUNC_3(&VAR_2->read_mutex);
 if (VAR_2->open && VAR_2->open(VAR_2))
  goto out;






 for (; VAR_6; VAR_6--) {
  struct pstore_record *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
  if (!VAR_7) {
   FUNC_5("out of memory creating record\n");
   break;
  }
  FUNC_8(VAR_7, VAR_2);

  VAR_7->size = VAR_2->read(VAR_7);


  if (VAR_7->size <= 0) {
   FUNC_1(VAR_7);
   break;
  }

  FUNC_0(VAR_7);
  VAR_8 = FUNC_7(VAR_3, VAR_7);
  if (VAR_8) {

   FUNC_1(VAR_7->buf);
   FUNC_1(VAR_7);
   if (VAR_8 != -VAR_0 || !VAR_4)
    VAR_5++;
  }
 }
 if (VAR_2->close)
  VAR_2->close(VAR_2);
out:
 FUNC_4(&VAR_2->read_mutex);

 if (VAR_5)
  FUNC_6("failed to create %d record(s) from '%s'\n",
   VAR_5, VAR_2->name);
 if (!VAR_6)
  FUNC_5("looping? Too many records seen from '%s'\n",
   VAR_2->name);
}
