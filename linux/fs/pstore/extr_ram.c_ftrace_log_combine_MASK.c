
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_ftrace_record {int dummy; } ;
struct persistent_ram_zone {size_t old_log_size; void* old_log; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (struct pstore_ftrace_record*) ;

__attribute__((used)) static ssize_t FUNC_3(struct persistent_ram_zone *VAR_2,
      struct persistent_ram_zone *VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 size_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 void *VAR_12;
 struct pstore_ftrace_record *VAR_13, *VAR_14, *VAR_15;
 size_t VAR_16 = sizeof(struct pstore_ftrace_record);

 VAR_7 = VAR_2->old_log_size % VAR_16;
 VAR_4 = VAR_2->old_log_size - VAR_7;

 VAR_8 = VAR_3->old_log_size % VAR_16;
 VAR_5 = VAR_3->old_log_size - VAR_8;

 VAR_6 = VAR_4 + VAR_5;
 VAR_12 = FUNC_1(VAR_6, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = (struct pstore_ftrace_record *)(VAR_2->old_log + VAR_7);
 VAR_14 = (struct pstore_ftrace_record *)(VAR_3->old_log + VAR_8);
 VAR_15 = (struct pstore_ftrace_record *)(VAR_12);

 while (VAR_4 > 0 && VAR_5 > 0) {
  if (FUNC_2(&VAR_13[VAR_9]) <
      FUNC_2(&VAR_14[VAR_10])) {
   VAR_15[VAR_11++] = VAR_13[VAR_9++];
   VAR_4 -= VAR_16;
  } else {
   VAR_15[VAR_11++] = VAR_14[VAR_10++];
   VAR_5 -= VAR_16;
  }
 }

 while (VAR_4 > 0) {
  VAR_15[VAR_11++] = VAR_13[VAR_9++];
  VAR_4 -= VAR_16;
 }

 while (VAR_5 > 0) {
  VAR_15[VAR_11++] = VAR_14[VAR_10++];
  VAR_5 -= VAR_16;
 }

 FUNC_0(VAR_2->old_log);
 VAR_2->old_log = VAR_12;
 VAR_2->old_log_size = VAR_6;

 return 0;
}
