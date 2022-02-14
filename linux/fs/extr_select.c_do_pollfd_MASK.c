
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int fd; int revents; int events; } ;
struct fd {int file; } ;
struct TYPE_4__ {int _key; } ;
typedef TYPE_1__ poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct fd FUNC_1 (int) ;
 int FUNC_2 (struct fd) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static inline __poll_t FUNC_5(struct pollfd *VAR_3, poll_table *VAR_4,
         bool *VAR_5,
         __poll_t VAR_6)
{
 int VAR_7 = VAR_3->fd;
 __poll_t VAR_8 = 0, VAR_9;
 struct fd VAR_10;

 if (VAR_7 < 0)
  goto out;
 VAR_8 = VAR_2;
 VAR_10 = FUNC_1(VAR_7);
 if (!VAR_10.file)
  goto out;


 VAR_9 = FUNC_0(VAR_3->events) | VAR_0 | VAR_1;
 VAR_4->_key = VAR_9 | VAR_6;
 VAR_8 = FUNC_4(VAR_10.file, VAR_4);
 if (VAR_8 & VAR_6)
  *VAR_5 = 1;
 VAR_8 &= VAR_9;
 FUNC_2(VAR_10);

out:

 VAR_3->revents = FUNC_3(VAR_8);
 return VAR_8;
}
