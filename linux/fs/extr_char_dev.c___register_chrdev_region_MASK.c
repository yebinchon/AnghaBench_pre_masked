
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {unsigned int major; unsigned int baseminor; unsigned int minorct; struct char_device_struct* next; int name; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct char_device_struct* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct char_device_struct** VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (struct char_device_struct*) ;
 struct char_device_struct* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char const*,...) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static struct char_device_struct *
FUNC_9(unsigned int VAR_8, unsigned int VAR_9,
      int VAR_10, const char *VAR_11)
{
 struct char_device_struct *VAR_12, *VAR_13, *VAR_14 = ((void*)0);
 int VAR_15;
 int VAR_16;

 if (VAR_8 >= VAR_0) {
  FUNC_7("CHRDEV \"%s\" major requested (%u) is greater than the maximum (%u)\n",
         VAR_11, VAR_8, VAR_0-1);
  return FUNC_0(-VAR_2);
 }

 if (VAR_10 > VAR_5 + 1 - VAR_9) {
  FUNC_7("CHRDEV \"%s\" minor range requested (%u-%u) is out of range of maximum range (%u-%u) for a single major\n",
   VAR_11, VAR_9, VAR_9 + VAR_10 - 1, 0, VAR_5);
  return FUNC_0(-VAR_2);
 }

 VAR_12 = FUNC_3(sizeof(struct char_device_struct), VAR_4);
 if (VAR_12 == ((void*)0))
  return FUNC_0(-VAR_3);

 FUNC_5(&VAR_7);

 if (VAR_8 == 0) {
  VAR_15 = FUNC_1();
  if (VAR_15 < 0) {
   FUNC_7("CHRDEV \"%s\" dynamic allocation region is full\n",
          VAR_11);
   goto out;
  }
  VAR_8 = VAR_15;
 }

 VAR_15 = -VAR_1;
 VAR_16 = FUNC_4(VAR_8);
 for (VAR_13 = VAR_6[VAR_16]; VAR_13; VAR_14 = VAR_13, VAR_13 = VAR_13->next) {
  if (VAR_13->major < VAR_8)
   continue;

  if (VAR_13->major > VAR_8)
   break;

  if (VAR_13->baseminor + VAR_13->minorct <= VAR_9)
   continue;

  if (VAR_13->baseminor >= VAR_9 + VAR_10)
   break;

  goto out;
 }

 VAR_12->major = VAR_8;
 VAR_12->baseminor = VAR_9;
 VAR_12->minorct = VAR_10;
 FUNC_8(VAR_12->name, VAR_11, sizeof(VAR_12->name));

 if (!VAR_14) {
  VAR_12->next = VAR_13;
  VAR_6[VAR_16] = VAR_12;
 } else {
  VAR_12->next = VAR_14->next;
  VAR_14->next = VAR_12;
 }

 FUNC_6(&VAR_7);
 return VAR_12;
out:
 FUNC_6(&VAR_7);
 FUNC_2(VAR_12);
 return FUNC_0(VAR_15);
}
