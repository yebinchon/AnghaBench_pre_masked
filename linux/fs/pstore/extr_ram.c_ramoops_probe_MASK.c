
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ecc_size; } ;
struct ramoops_platform_data {size_t mem_size; size_t record_size; size_t console_size; size_t ftrace_size; size_t pmsg_size; int flags; int dump_oops; scalar_t__ mem_address; TYPE_1__ ecc_info; int mem_type; } ;
struct TYPE_6__ {int flags; scalar_t__ bufsize; int buf; struct ramoops_context* data; } ;
struct ramoops_context {int max_dump_cnt; size_t size; size_t record_size; size_t console_size; size_t ftrace_size; size_t pmsg_size; int flags; int max_ftrace_cnt; int cprz; int mprz; TYPE_3__ pstore; TYPE_1__ ecc_info; scalar_t__ phys_addr; TYPE_2__** dprzs; TYPE_2__** fprzs; int dump_oops; int memtype; } ;
struct device {struct ramoops_platform_data* platform_data; } ;
struct platform_device {struct device dev; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_5__ {scalar_t__ buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_10 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 int FUNC_4 (struct ramoops_platform_data*,int ,int) ;
 int VAR_13 ;
 struct ramoops_context VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,size_t,unsigned long long,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 size_t VAR_15 ;
 int FUNC_9 (struct ramoops_context*) ;
 size_t VAR_16 ;
 int FUNC_10 (char*,struct device*,struct ramoops_context*,int *,scalar_t__*,size_t,int ) ;
 int FUNC_11 (char*,struct device*,struct ramoops_context*,TYPE_2__***,scalar_t__*,size_t,int,int*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ramoops_platform_data*) ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 void* FUNC_13 (size_t) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_19)
{
 struct device *VAR_20 = &VAR_19->dev;
 struct ramoops_platform_data *VAR_21 = VAR_20->platform_data;
 struct ramoops_platform_data VAR_22;
 struct ramoops_context *VAR_23 = &VAR_14;
 size_t VAR_24;
 phys_addr_t VAR_25;
 int VAR_26 = -VAR_0;





 if (VAR_23->max_dump_cnt) {
  FUNC_6("already initialized\n");
  goto fail_out;
 }

 if (FUNC_0(VAR_20) && !VAR_21) {
  VAR_21 = &VAR_22;
  FUNC_4(VAR_21, 0, sizeof(*VAR_21));

  VAR_26 = FUNC_12(VAR_19, VAR_21);
  if (VAR_26 < 0)
   goto fail_out;
 }


 if (!VAR_21) {
  FUNC_6("NULL platform data\n");
  goto fail_out;
 }

 if (!VAR_21->mem_size || (!VAR_21->record_size && !VAR_21->console_size &&
   !VAR_21->ftrace_size && !VAR_21->pmsg_size)) {
  FUNC_6("The memory size and the record/console size must be "
   "non-zero\n");
  goto fail_out;
 }

 if (VAR_21->record_size && !FUNC_1(VAR_21->record_size))
  VAR_21->record_size = FUNC_13(VAR_21->record_size);
 if (VAR_21->console_size && !FUNC_1(VAR_21->console_size))
  VAR_21->console_size = FUNC_13(VAR_21->console_size);
 if (VAR_21->ftrace_size && !FUNC_1(VAR_21->ftrace_size))
  VAR_21->ftrace_size = FUNC_13(VAR_21->ftrace_size);
 if (VAR_21->pmsg_size && !FUNC_1(VAR_21->pmsg_size))
  VAR_21->pmsg_size = FUNC_13(VAR_21->pmsg_size);

 VAR_23->size = VAR_21->mem_size;
 VAR_23->phys_addr = VAR_21->mem_address;
 VAR_23->memtype = VAR_21->mem_type;
 VAR_23->record_size = VAR_21->record_size;
 VAR_23->console_size = VAR_21->console_size;
 VAR_23->ftrace_size = VAR_21->ftrace_size;
 VAR_23->pmsg_size = VAR_21->pmsg_size;
 VAR_23->dump_oops = VAR_21->dump_oops;
 VAR_23->flags = VAR_21->flags;
 VAR_23->ecc_info = VAR_21->ecc_info;

 VAR_25 = VAR_23->phys_addr;

 VAR_24 = VAR_23->size - VAR_23->console_size - VAR_23->ftrace_size
   - VAR_23->pmsg_size;
 VAR_26 = FUNC_11("dmesg", VAR_20, VAR_23, &VAR_23->dprzs, &VAR_25,
    VAR_24, VAR_23->record_size,
    &VAR_23->max_dump_cnt, 0, 0);
 if (VAR_26)
  goto fail_out;

 VAR_26 = FUNC_10("console", VAR_20, VAR_23, &VAR_23->cprz, &VAR_25,
          VAR_23->console_size, 0);
 if (VAR_26)
  goto fail_init_cprz;

 VAR_23->max_ftrace_cnt = (VAR_23->flags & VAR_9)
    ? VAR_13
    : 1;
 VAR_26 = FUNC_11("ftrace", VAR_20, VAR_23, &VAR_23->fprzs, &VAR_25,
    VAR_23->ftrace_size, -1,
    &VAR_23->max_ftrace_cnt, VAR_3,
    (VAR_23->flags & VAR_9)
     ? VAR_4 : 0);
 if (VAR_26)
  goto fail_init_fprz;

 VAR_26 = FUNC_10("pmsg", VAR_20, VAR_23, &VAR_23->mprz, &VAR_25,
    VAR_23->pmsg_size, 0);
 if (VAR_26)
  goto fail_init_mprz;

 VAR_23->pstore.data = VAR_23;






 VAR_23->pstore.flags = 0;
 if (VAR_23->max_dump_cnt)
  VAR_23->pstore.flags |= VAR_6;
 if (VAR_23->console_size)
  VAR_23->pstore.flags |= VAR_5;
 if (VAR_23->max_ftrace_cnt)
  VAR_23->pstore.flags |= VAR_7;
 if (VAR_23->pmsg_size)
  VAR_23->pstore.flags |= VAR_8;






 if (VAR_23->pstore.flags & VAR_6) {
  VAR_23->pstore.bufsize = VAR_23->dprzs[0]->buffer_size;
  VAR_23->pstore.buf = FUNC_3(VAR_23->pstore.bufsize, VAR_2);
  if (!VAR_23->pstore.buf) {
   FUNC_6("cannot allocate pstore crash dump buffer\n");
   VAR_26 = -VAR_1;
   goto fail_clear;
  }
 }

 VAR_26 = FUNC_8(&VAR_23->pstore);
 if (VAR_26) {
  FUNC_6("registering with pstore failed\n");
  goto fail_buf;
 }





 VAR_12 = VAR_21->mem_size;
 VAR_11 = VAR_21->mem_address;
 VAR_18 = VAR_21->record_size;
 VAR_10 = VAR_21->dump_oops;
 VAR_15 = VAR_21->console_size;
 VAR_17 = VAR_21->pmsg_size;
 VAR_16 = VAR_21->ftrace_size;

 FUNC_7("using 0x%lx@0x%llx, ecc: %d\n",
  VAR_23->size, (unsigned long long)VAR_23->phys_addr,
  VAR_23->ecc_info.ecc_size);

 return 0;

fail_buf:
 FUNC_2(VAR_23->pstore.buf);
fail_clear:
 VAR_23->pstore.bufsize = 0;
 FUNC_5(VAR_23->mprz);
fail_init_mprz:
fail_init_fprz:
 FUNC_5(VAR_23->cprz);
fail_init_cprz:
 FUNC_9(VAR_23);
fail_out:
 return VAR_26;
}
